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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTTIMINGSYNTHETICTASKSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTTIMINGSYNTHETICTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT ListTimingSyntheticTasksResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Item
					{
						struct CommonSetting
						{
							struct CustomHost
							{
								struct Host
								{
									int ipType;
									std::string domain;
									std::vector<std::string> ips;
								};
								std::vector<Host> hosts;
								int selectType;
							};
							struct CustomVPCSetting
							{
								std::string vpcId;
								std::string vSwitchId;
								std::string secureGroupId;
								std::string regionId;
							};
							struct CustomPrometheusSetting
							{
								std::string prometheusClusterId;
								std::string prometheusClusterRegion;
								std::string prometheusLabels;
							};
							CustomPrometheusSetting customPrometheusSetting;
							int ipType;
							bool isOpenTrace;
							int traceClientType;
							CustomVPCSetting customVPCSetting;
							std::string xtraceRegion;
							CustomHost customHost;
							int monitorSamples;
						};
						struct Tag
						{
							std::string value;
							std::string key;
						};
						std::string status;
						std::string taskId;
						std::string resourceGroupId;
						std::string gmtModified;
						std::string url;
						std::string name;
						std::string gmtCreate;
						int taskType;
						std::string frequency;
						int monitorCategory;
						std::string monitorNum;
						std::string regionId;
						CommonSetting commonSetting;
						std::vector<Item::Tag> tags;
					};
					int pageSize;
					int total;
					std::vector<Item> items;
					int page;
				};


				ListTimingSyntheticTasksResult();
				explicit ListTimingSyntheticTasksResult(const std::string &payload);
				~ListTimingSyntheticTasksResult();
				std::string getMessage()const;
				Data getData()const;
				long getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				long code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTTIMINGSYNTHETICTASKSRESULT_H_