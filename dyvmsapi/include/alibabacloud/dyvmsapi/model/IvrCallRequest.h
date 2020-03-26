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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_IVRCALLREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_IVRCALLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT IvrCallRequest : public RpcServiceRequest
			{
			public:
				struct MenuKeyMap
				{
					std::string code;
					std::string ttsParams;
					std::string key;
				};

			public:
				IvrCallRequest();
				~IvrCallRequest();

				std::string getByeCode()const;
				void setByeCode(const std::string& byeCode);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getStartTtsParams()const;
				void setStartTtsParams(const std::string& startTtsParams);
				int getTimeout()const;
				void setTimeout(int timeout);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getStartCode()const;
				void setStartCode(const std::string& startCode);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);
				std::string getCalledShowNumber()const;
				void setCalledShowNumber(const std::string& calledShowNumber);
				std::vector<MenuKeyMap> getMenuKeyMap()const;
				void setMenuKeyMap(const std::vector<MenuKeyMap>& menuKeyMap);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getPlayTimes()const;
				void setPlayTimes(long playTimes);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getOutId()const;
				void setOutId(const std::string& outId);
				std::string getByeTtsParams()const;
				void setByeTtsParams(const std::string& byeTtsParams);

            private:
				std::string byeCode_;
				long resourceOwnerId_;
				std::string startTtsParams_;
				int timeout_;
				std::string accessKeyId_;
				std::string startCode_;
				std::string calledNumber_;
				std::string calledShowNumber_;
				std::vector<MenuKeyMap> menuKeyMap_;
				std::string resourceOwnerAccount_;
				long playTimes_;
				long ownerId_;
				std::string outId_;
				std::string byeTtsParams_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_IVRCALLREQUEST_H_