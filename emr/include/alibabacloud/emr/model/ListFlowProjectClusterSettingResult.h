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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWPROJECTCLUSTERSETTINGRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWPROJECTCLUSTERSETTINGRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListFlowProjectClusterSettingResult : public ServiceResult
			{
			public:
				struct ClusterSetting
				{
					long gmtCreate;
					std::string defaultUser;
					std::string defaultQueue;
					std::string clusterId;
					long gmtModified;
					std::string projectId;
					std::string clusterName;
					std::vector<std::string> hostList;
					std::vector<std::string> userList;
					std::string k8sClusterId;
					std::vector<std::string> queueList;
				};


				ListFlowProjectClusterSettingResult();
				explicit ListFlowProjectClusterSettingResult(const std::string &payload);
				~ListFlowProjectClusterSettingResult();
				std::vector<ClusterSetting> getClusterSettings()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ClusterSetting> clusterSettings_;
				int pageSize_;
				int pageNumber_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWPROJECTCLUSTERSETTINGRESULT_H_