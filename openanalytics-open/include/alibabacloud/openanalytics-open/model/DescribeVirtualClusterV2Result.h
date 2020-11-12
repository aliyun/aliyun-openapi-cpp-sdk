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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_DESCRIBEVIRTUALCLUSTERV2RESULT_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_DESCRIBEVIRTUALCLUSTERV2RESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT DescribeVirtualClusterV2Result : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct SparkEngineConfig
					{
						std::string defaultExecutorSpecName;
						long defaultExecutorNumbers;
						std::string defaultDriverSpecName;
						std::string sparkVersionDescription;
						std::string sparkModuleReleaseName;
					};
					struct UserNetWorkConfigListItem
					{
						std::string securityGroupId;
						std::string switchId;
						long id;
					};
					std::string status;
					std::string type;
					std::vector<DataItem::UserNetWorkConfigListItem> userNetWorkConfigList;
					std::string creatorId;
					std::string chargeType;
					std::string createTime;
					float maxCpu;
					std::string minCpu;
					SparkEngineConfig sparkEngineConfig;
					std::string name;
				};


				DescribeVirtualClusterV2Result();
				explicit DescribeVirtualClusterV2Result(const std::string &payload);
				~DescribeVirtualClusterV2Result();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_DESCRIBEVIRTUALCLUSTERV2RESULT_H_