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

#ifndef ALIBABACLOUD_GREEN_MODEL_MARKOSSRESULTREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_MARKOSSRESULTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT MarkOssResultRequest : public RpcServiceRequest
			{

			public:
				MarkOssResultRequest();
				~MarkOssResultRequest();

				std::string getScene()const;
				void setScene(const std::string& scene);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				bool getStock()const;
				void setStock(bool stock);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getIds()const;
				void setIds(const std::string& ids);
				std::string getOperation()const;
				void setOperation(const std::string& operation);

            private:
				std::string scene_;
				std::string sourceIp_;
				std::string lang_;
				bool stock_;
				std::string resourceType_;
				std::string ids_;
				std::string operation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_MARKOSSRESULTREQUEST_H_