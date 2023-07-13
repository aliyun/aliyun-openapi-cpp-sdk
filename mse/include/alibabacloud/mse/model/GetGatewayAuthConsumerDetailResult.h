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

#ifndef ALIBABACLOUD_MSE_MODEL_GETGATEWAYAUTHCONSUMERDETAILRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_GETGATEWAYAUTHCONSUMERDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT GetGatewayAuthConsumerDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Resource
					{
						std::string gatewayUniqueId;
						std::string gmtCreate;
						long consumerId;
						std::string gmtModified;
						std::string routeName;
						bool resourceStatus;
						long id;
						long routeId;
					};
					std::string description;
					std::string keyValue;
					std::string encodeType;
					std::string gmtModified;
					std::string tokenPosition;
					std::string name;
					std::string keyName;
					std::string gatewayUniqueId;
					std::string tokenPrefix;
					std::vector<Resource> resourceList;
					std::string type;
					std::string gmtCreate;
					bool tokenPass;
					std::string jwks;
					bool consumerStatus;
					std::string primaryUser;
					std::string tokenName;
					long id;
				};


				GetGatewayAuthConsumerDetailResult();
				explicit GetGatewayAuthConsumerDetailResult(const std::string &payload);
				~GetGatewayAuthConsumerDetailResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string dynamicMessage_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_GETGATEWAYAUTHCONSUMERDETAILRESULT_H_