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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERSERVICECONFIGHISTORYRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERSERVICECONFIGHISTORYRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeClusterServiceConfigHistoryResult : public ServiceResult
			{
			public:
				struct Config
				{
					struct ConfigValue
					{
						struct ConfigItemValue
						{
							std::string changeType;
							std::string oldValue;
							std::string value;
							std::string itemName;
						};
						std::string configName;
						std::vector<ConfigValue::ConfigItemValue> configItemValueList;
					};
					std::string comment;
					std::string serviceName;
					std::string configVersion;
					std::string createTime;
					std::string author;
					std::vector<ConfigValue> configValueList;
					bool applied;
				};


				DescribeClusterServiceConfigHistoryResult();
				explicit DescribeClusterServiceConfigHistoryResult(const std::string &payload);
				~DescribeClusterServiceConfigHistoryResult();
				Config getConfig()const;

			protected:
				void parse(const std::string &payload);
			private:
				Config config_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERSERVICECONFIGHISTORYRESULT_H_