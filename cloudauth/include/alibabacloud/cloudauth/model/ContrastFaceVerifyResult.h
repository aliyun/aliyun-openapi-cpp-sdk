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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_CONTRASTFACEVERIFYRESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_CONTRASTFACEVERIFYRESULT_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT ContrastFaceVerifyResult : public ServiceResult
			{
			public:
				struct ResultObject
				{
					std::string passed;
					std::string certifyId;
					std::string identityInfo;
					std::string materialInfo;
					std::string subCode;
				};


				ContrastFaceVerifyResult();
				explicit ContrastFaceVerifyResult(const std::string &payload);
				~ContrastFaceVerifyResult();
				ResultObject getResultObject()const;
				std::string getMessage()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				ResultObject resultObject_;
				std::string message_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_CONTRASTFACEVERIFYRESULT_H_