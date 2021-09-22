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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTK8SINGRESSRULESRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTK8SINGRESSRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ListK8sIngressRulesResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct IngressConfsItem
					{
						struct RulesItem
						{
							struct PathsItem
							{
								struct Backend
								{
									std::string servicePort;
									std::string serviceName;
								};
								std::string status;
								std::string path;
								Backend backend;
								std::string appId;
								std::string appName;
							};
							std::string secretName;
							std::string host;
							std::vector<RulesItem::PathsItem> paths;
						};
						bool sslRedirect;
						std::string endpoint;
						std::string creationTime;
						std::string _namespace;
						std::vector<IngressConfsItem::RulesItem> rules;
						std::string name;
						std::string dashboardUrl;
					};
					std::string clusterId;
					std::string clusterName;
					std::string regionId;
					std::vector<DataItem::IngressConfsItem> ingressConfs;
				};


				ListK8sIngressRulesResult();
				explicit ListK8sIngressRulesResult(const std::string &payload);
				~ListK8sIngressRulesResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTK8SINGRESSRULESRESULT_H_