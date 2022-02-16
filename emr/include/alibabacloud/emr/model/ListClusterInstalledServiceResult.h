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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCLUSTERINSTALLEDSERVICERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCLUSTERINSTALLEDSERVICERESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListClusterInstalledServiceResult : public ServiceResult
			{
			public:
				struct ClusterInstalledService
				{
					struct ServiceAction
					{
						std::string actionName;
						std::string serviceName;
						std::string command;
						std::string displayName;
						std::string componentName;
					};
					std::string comment;
					std::vector<ClusterInstalledService::ServiceAction> serviceActionList;
					std::string serviceName;
					std::string serviceEcmVersion;
					std::string serviceStatus;
					int notStartedNum;
					int abnormalNum;
					std::string state;
					std::string serviceVersion;
					bool onlyClient;
					int needRestartNum;
					std::string serviceDisplayName;
				};


				ListClusterInstalledServiceResult();
				explicit ListClusterInstalledServiceResult(const std::string &payload);
				~ListClusterInstalledServiceResult();
				std::vector<ClusterInstalledService> getClusterInstalledServiceList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ClusterInstalledService> clusterInstalledServiceList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCLUSTERINSTALLEDSERVICERESULT_H_