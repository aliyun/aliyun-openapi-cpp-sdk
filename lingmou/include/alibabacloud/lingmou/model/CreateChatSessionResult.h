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

#ifndef ALIBABACLOUD_LINGMOU_MODEL_CREATECHATSESSIONRESULT_H_
#define ALIBABACLOUD_LINGMOU_MODEL_CREATECHATSESSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/lingmou/LingMouExport.h>

namespace AlibabaCloud
{
	namespace LingMou
	{
		namespace Model
		{
			class ALIBABACLOUD_LINGMOU_EXPORT CreateChatSessionResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RtcParams
					{
						std::string gslb;
						std::string nonce;
						std::string appId;
						std::string serverUserId;
						std::string channel;
						std::string token;
						std::string avatarUserId;
						std::string clientUserId;
						long timestamp;
					};
					struct AvatarAssets
					{
						std::string secret;
						std::string type;
						std::string minRequiredVersion;
						std::string url;
						std::string md5;
					};
					AvatarAssets avatarAssets;
					RtcParams rtcParams;
					std::string sessionId;
				};


				CreateChatSessionResult();
				explicit CreateChatSessionResult(const std::string &payload);
				~CreateChatSessionResult();
				std::string getRequestId()const;
				std::string getMessage()const;
				long getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string message_;
				long httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINGMOU_MODEL_CREATECHATSESSIONRESULT_H_