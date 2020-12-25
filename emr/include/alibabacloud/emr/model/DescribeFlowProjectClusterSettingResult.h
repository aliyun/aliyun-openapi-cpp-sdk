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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWPROJECTCLUSTERSETTINGRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWPROJECTCLUSTERSETTINGRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeFlowProjectClusterSettingResult : public ServiceResult
			{
			public:


				DescribeFlowProjectClusterSettingResult();
				explicit DescribeFlowProjectClusterSettingResult(const std::string &payload);
				~DescribeFlowProjectClusterSettingResult();
				long getGmtCreate()const;
				std::string getDefaultUser()const;
				std::string getDefaultQueue()const;
				std::string getClusterId()const;
				long getGmtModified()const;
				std::string getProjectId()const;
				std::vector<std::string> getHostList()const;
				std::vector<std::string> getUserList()const;
				std::string getK8sClusterId()const;
				std::vector<std::string> getQueueList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long gmtCreate_;
				std::string defaultUser_;
				std::string defaultQueue_;
				std::string clusterId_;
				long gmtModified_;
				std::string projectId_;
				std::vector<std::string> hostList_;
				std::vector<std::string> userList_;
				std::string k8sClusterId_;
				std::vector<std::string> queueList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEFLOWPROJECTCLUSTERSETTINGRESULT_H_