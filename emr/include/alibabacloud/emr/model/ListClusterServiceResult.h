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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSERVICERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSERVICERESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListClusterServiceResult : public ServiceResult
			{
			public:
				struct ClusterService
				{
					struct ServiceAction
					{
						std::string actionName;
						std::string serviceName;
						std::string command;
						std::string displayName;
						std::string componentName;
					};
					bool clientType;
					std::vector<ClusterService::ServiceAction> serviceActionList;
					std::string healthStatus;
					std::string notStartInfo;
					std::string serviceDisplayName;
					int stoppedNum;
					std::string serviceName;
					std::string serviceStatus;
					int abnormalNum;
					std::string state;
					std::string serviceVersion;
					bool installStatus;
					std::string needRestartInfo;
					int needRestartNum;
				};


				ListClusterServiceResult();
				explicit ListClusterServiceResult(const std::string &payload);
				~ListClusterServiceResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ClusterService> getClusterServiceList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ClusterService> clusterServiceList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSERVICERESULT_H_