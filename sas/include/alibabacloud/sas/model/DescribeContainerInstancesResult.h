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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBECONTAINERINSTANCESRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBECONTAINERINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeContainerInstancesResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct ContainerInstance
				{
					std::string vulStatus;
					std::string imageDigest;
					std::string nodeName;
					std::string imageRepoNamespace;
					std::string image;
					std::string imageUuid;
					std::string riskCount;
					std::string appName;
					std::string containerId;
					std::string imageId;
					std::string clusterName;
					long createTimestamp;
					int alarmCount;
					std::string hostIp;
					int hcCount;
					std::string pod;
					std::string clusterId;
					std::string instanceId;
					std::string _namespace;
					std::string riskStatus;
					int vulCount;
					std::string imageRepoName;
					int exposed;
					std::string nodeInfo;
					std::string podIp;
					std::string alarmStatus;
					std::string regionId;
					std::string imageRepoTag;
					std::string hcStatus;
					std::string updateMark;
					std::string exposedDetail;
				};


				DescribeContainerInstancesResult();
				explicit DescribeContainerInstancesResult(const std::string &payload);
				~DescribeContainerInstancesResult();
				PageInfo getPageInfo()const;
				std::vector<ContainerInstance> getContainerInstanceList()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<ContainerInstance> containerInstanceList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBECONTAINERINSTANCESRESULT_H_