#!/usr/bin/env python

class ConfigManager:
    
    def __init__(self):
        prw = PRW()
        config_dict = prw.read('./config.yml')
        for key, value in config_dict.items():
            setattr(self, key, value)