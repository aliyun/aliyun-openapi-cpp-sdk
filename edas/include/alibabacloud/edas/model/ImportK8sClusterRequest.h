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

#ifndef ALIBABACLOUD_EDAS_MODEL_IMPORTK8SCLUSTERREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_IMPORTK8SCLUSTERREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT ImportK8sClusterRequest : public RoaServiceRequest
			{

			public:
				ImportK8sClusterRequest();
				~ImportK8sClusterRequest();

				int getMode()const;
				void setMode(int mode);
				bool getEnableAsm()const;
				void setEnableAsm(bool enableAsm);
				std::string getNamespaceId()const;
				void setNamespaceId(const std::string& namespaceId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);

            private:
				int mode_;
				bool enableAsm_;
				std::string namespaceId_;
				std::string clusterId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_IMPORTK8SCLUSTERREQUEST_H_