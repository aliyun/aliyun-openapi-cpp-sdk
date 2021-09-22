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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTK8SSECRETSRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTK8SSECRETSRESULT_H_

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
			class ALIBABACLOUD_EDAS_EXPORT ListK8sSecretsResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct SecretsItem
					{
						struct CertDetail
						{
							std::string status;
							std::string endTime;
							std::string issuer;
							std::string startTime;
							std::vector<std::string> domainNames;
						};
						struct RelatedIngressRulesItem
						{
							struct RelatedAppsItem
							{
								std::string appId;
								std::string appName;
							};
							std::vector<RelatedIngressRulesItem::RelatedAppsItem> relatedApps1;
							std::string _namespace;
							std::string name;
						};
						struct DataItem
						{
							std::string value;
							std::string key;
						};
						struct RelatedAppsItem2
						{
							std::string appId;
							std::string appName;
						};
						std::vector<SecretsItem::RelatedAppsItem2> relatedApps;
						std::string clusterId;
						std::string certId;
						std::vector<SecretsItem::DataItem> data;
						std::string _namespace;
						std::string name;
						std::string type;
						std::vector<SecretsItem::RelatedIngressRulesItem> relatedIngressRules;
						CertDetail certDetail;
						std::string certRegionId;
						std::string creationTime;
						std::string clusterName;
						bool base64Encoded;
					};
					std::vector<ResultItem::SecretsItem> secrets;
					int total;
				};


				ListK8sSecretsResult();
				explicit ListK8sSecretsResult(const std::string &payload);
				~ListK8sSecretsResult();
				std::string getMessage()const;
				int getCode()const;
				std::vector<ResultItem> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int code_;
				std::vector<ResultItem> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTK8SSECRETSRESULT_H_