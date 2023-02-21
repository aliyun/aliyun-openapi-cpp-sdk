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

#ifndef ALIBABACLOUD_EFLO_CONTROLLER_MODEL_LISTCLUSTERSRESULT_H_
#define ALIBABACLOUD_EFLO_CONTROLLER_MODEL_LISTCLUSTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eflo-controller/Eflo_controllerExport.h>

namespace AlibabaCloud
{
	namespace Eflo_controller
	{
		namespace Model
		{
			class ALIBABACLOUD_EFLO_CONTROLLER_EXPORT ListClustersResult : public ServiceResult
			{
			public:
				struct ClustersItem
				{
					ObjectOfAny components;
					std::string taskId;
					long nodeCount;
					std::string resourceGroupId;
					std::string clusterId;
					std::string createTime;
					std::string updateTime;
					std::string clusterName;
					long nodeGroupCount;
					std::string operatingState;
					std::string clusterType;
					std::string clusterDescription;
				};


				ListClustersResult();
				explicit ListClustersResult(const std::string &payload);
				~ListClustersResult();
				std::string getNextToken()const;
				std::vector<ClustersItem> getClusters()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<ClustersItem> clusters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EFLO_CONTROLLER_MODEL_LISTCLUSTERSRESULT_H_