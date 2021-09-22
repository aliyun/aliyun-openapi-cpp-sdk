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

#ifndef ALIBABACLOUD_EDAS_MODEL_CREATEK8SSECRETREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_CREATEK8SSECRETREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT CreateK8sSecretRequest : public RoaServiceRequest
			{

			public:
				CreateK8sSecretRequest();
				~CreateK8sSecretRequest();

				bool getBase64Encoded()const;
				void setBase64Encoded(bool base64Encoded);
				std::string getData()const;
				void setData(const std::string& data);
				std::string getName()const;
				void setName(const std::string& name);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getCertId()const;
				void setCertId(const std::string& certId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getCertRegionId()const;
				void setCertRegionId(const std::string& certRegionId);

            private:
				bool base64Encoded_;
				std::string data_;
				std::string name_;
				std::string _namespace_;
				std::string clusterId_;
				std::string certId_;
				std::string type_;
				std::string certRegionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_CREATEK8SSECRETREQUEST_H_