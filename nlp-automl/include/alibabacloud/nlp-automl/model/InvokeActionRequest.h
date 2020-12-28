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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_INVOKEACTIONREQUEST_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_INVOKEACTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/nlp-automl/Nlp_automlExport.h>

namespace AlibabaCloud
{
	namespace Nlp_automl
	{
		namespace Model
		{
			class ALIBABACLOUD_NLP_AUTOML_EXPORT InvokeActionRequest : public RpcServiceRequest
			{

			public:
				InvokeActionRequest();
				~InvokeActionRequest();

				std::string getInvokeProduct()const;
				void setInvokeProduct(const std::string& invokeProduct);
				std::string getInvokeAction()const;
				void setInvokeAction(const std::string& invokeAction);
				std::string getInvokeParams()const;
				void setInvokeParams(const std::string& invokeParams);
				std::string getInvokeRegion()const;
				void setInvokeRegion(const std::string& invokeRegion);

            private:
				std::string invokeProduct_;
				std::string invokeAction_;
				std::string invokeParams_;
				std::string invokeRegion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_INVOKEACTIONREQUEST_H_