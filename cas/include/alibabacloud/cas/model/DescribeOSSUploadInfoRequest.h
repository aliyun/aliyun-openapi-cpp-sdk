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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBEOSSUPLOADINFOREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBEOSSUPLOADINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT DescribeOSSUploadInfoRequest : public RpcServiceRequest
			{

			public:
				DescribeOSSUploadInfoRequest();
				~DescribeOSSUploadInfoRequest();

				long getOrderId()const;
				void setOrderId(long orderId);
				int getDocumentType()const;
				void setDocumentType(int documentType);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				long orderId_;
				int documentType_;
				std::string resourceGroupId_;
				std::string sourceIp_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBEOSSUPLOADINFOREQUEST_H_