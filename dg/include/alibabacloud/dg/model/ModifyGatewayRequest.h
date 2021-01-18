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

#ifndef ALIBABACLOUD_DG_MODEL_MODIFYGATEWAYREQUEST_H_
#define ALIBABACLOUD_DG_MODEL_MODIFYGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dg/DgExport.h>

namespace AlibabaCloud
{
	namespace Dg
	{
		namespace Model
		{
			class ALIBABACLOUD_DG_EXPORT ModifyGatewayRequest : public RpcServiceRequest
			{

			public:
				ModifyGatewayRequest();
				~ModifyGatewayRequest();

				std::string getGatewayDesc()const;
				void setGatewayDesc(const std::string& gatewayDesc);
				std::string getGatewayName()const;
				void setGatewayName(const std::string& gatewayName);
				std::string getGatewayId()const;
				void setGatewayId(const std::string& gatewayId);

            private:
				std::string gatewayDesc_;
				std::string gatewayName_;
				std::string gatewayId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DG_MODEL_MODIFYGATEWAYREQUEST_H_