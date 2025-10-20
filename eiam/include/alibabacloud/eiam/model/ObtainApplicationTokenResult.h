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

#ifndef ALIBABACLOUD_EIAM_MODEL_OBTAINAPPLICATIONTOKENRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_OBTAINAPPLICATIONTOKENRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT ObtainApplicationTokenResult : public ServiceResult
			{
			public:
				struct ApplicationToken
				{
					std::string status;
					std::string applicationTokenId;
					std::string instanceId;
					long lastUsedTime;
					long createTime;
					std::string applicationTokenType;
					std::string applicationToken;
					std::string applicationId;
					long expirationTime;
				};


				ObtainApplicationTokenResult();
				explicit ObtainApplicationTokenResult(const std::string &payload);
				~ObtainApplicationTokenResult();
				ApplicationToken getApplicationToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				ApplicationToken applicationToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_OBTAINAPPLICATIONTOKENRESULT_H_