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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTK8SSECRETSREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTK8SSECRETSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ListK8sSecretsRequest : public RoaServiceRequest
			{

			public:
				ListK8sSecretsRequest();
				~ListK8sSecretsRequest();

				std::string getCondition()const;
				void setCondition(const std::string& condition);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageNo()const;
				void setPageNo(int pageNo);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				bool getShowRelatedApps()const;
				void setShowRelatedApps(bool showRelatedApps);

            private:
				std::string condition_;
				std::string regionId_;
				int pageNo_;
				std::string _namespace_;
				int pageSize_;
				std::string clusterId_;
				bool showRelatedApps_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTK8SSECRETSREQUEST_H_