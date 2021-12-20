/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERSERVICECONFIGRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERSERVICECONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT DescribeClusterServiceConfigResult : public ServiceResult
			{
			public:
				struct Config
				{
					struct ConfigValue
					{
						struct ConfigItemValue
						{
							std::string description;
							bool isCustom;
							std::string value;
							std::string valueScope;
							std::string itemName;
						};
						std::string configName;
						std::string scope;
						bool allowCustom;
						long scopeId;
						std::vector<ConfigValue::ConfigItemValue> configItemValueList;
					};
					struct PropertyInfo
					{
						struct PropertyValueAttributes
						{
							struct ValueEntryInfo
							{
								std::string description;
								std::string value;
								std::string label;
							};
							bool readOnly;
							std::string type;
							std::string maximum;
							std::string mimimum;
							bool hidden;
							std::vector<ValueEntryInfo> entries;
							std::string incrememtStep;
							std::string unit;
						};
						struct EffectWay
						{
							std::string invokeServiceName;
							std::string effectType;
						};
						std::vector<std::string> propertyTypes;
						std::string description;
						PropertyValueAttributes propertyValueAttributes;
						std::string serviceName;
						EffectWay effectWay;
						std::string fileName;
						std::string value;
						std::string displayName;
						std::string component;
						std::string name;
					};
					std::string comment;
					std::string serviceName;
					std::vector<PropertyInfo> propertyInfoList;
					std::string configVersion;
					std::string createTime;
					std::string author;
					std::vector<ConfigValue> configValueList;
					std::string applied;
				};


				DescribeClusterServiceConfigResult();
				explicit DescribeClusterServiceConfigResult(const std::string &payload);
				~DescribeClusterServiceConfigResult();
				Config getConfig()const;

			protected:
				void parse(const std::string &payload);
			private:
				Config config_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERSERVICECONFIGRESULT_H_