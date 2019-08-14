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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_GETVERIFYTOKENRESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_GETVERIFYTOKENRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT GetVerifyTokenResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct VerifyToken
					{
						std::string token;
						int durationSeconds;
					};
					struct StsToken
					{
						std::string path;
						std::string bucketName;
						std::string accessKeyId;
						std::string accessKeySecret;
						std::string expiration;
						std::string token;
						std::string endPoint;
					};
					StsToken stsToken;
					std::string cloudauthPageUrl;
					VerifyToken verifyToken;
				};


				GetVerifyTokenResult();
				explicit GetVerifyTokenResult(const std::string &payload);
				~GetVerifyTokenResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_GETVERIFYTOKENRESULT_H_