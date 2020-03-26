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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_ACCEPTPARTNERNOTIFICATIONREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_ACCEPTPARTNERNOTIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT AcceptPartnerNotificationRequest : public RpcServiceRequest
			{

			public:
				AcceptPartnerNotificationRequest();
				~AcceptPartnerNotificationRequest();

				std::string getMaterial()const;
				void setMaterial(const std::string& material);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getOperation()const;
				void setOperation(const std::string& operation);

            private:
				std::string material_;
				std::string bizId_;
				std::string remark_;
				std::string operation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_ACCEPTPARTNERNOTIFICATIONREQUEST_H_