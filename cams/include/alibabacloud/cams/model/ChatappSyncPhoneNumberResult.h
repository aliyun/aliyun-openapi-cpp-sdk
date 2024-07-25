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

#ifndef ALIBABACLOUD_CAMS_MODEL_CHATAPPSYNCPHONENUMBERRESULT_H_
#define ALIBABACLOUD_CAMS_MODEL_CHATAPPSYNCPHONENUMBERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cams/CamsExport.h>

namespace AlibabaCloud
{
	namespace Cams
	{
		namespace Model
		{
			class ALIBABACLOUD_CAMS_EXPORT ChatappSyncPhoneNumberResult : public ServiceResult
			{
			public:
				struct Content
				{
					std::string verifiedName;
					std::string status;
					std::string qualityRating;
					std::string codeVerificationStatus;
					std::string newNameStatus;
					std::string phoneNumber;
					std::string statusQueue;
					std::string upQueue;
					std::string nameStatus;
					std::string upCallbackUrl;
					std::string messagingLimitTier;
					std::string statusCallbackUrl;
				};


				ChatappSyncPhoneNumberResult();
				explicit ChatappSyncPhoneNumberResult(const std::string &payload);
				~ChatappSyncPhoneNumberResult();
				std::vector<Content> getPhoneNumbers()const;
				std::string getAccessDeniedDetail()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Content> phoneNumbers_;
				std::string accessDeniedDetail_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAMS_MODEL_CHATAPPSYNCPHONENUMBERRESULT_H_