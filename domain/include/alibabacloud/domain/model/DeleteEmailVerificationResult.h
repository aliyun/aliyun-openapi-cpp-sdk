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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_DELETEEMAILVERIFICATIONRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_DELETEEMAILVERIFICATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT DeleteEmailVerificationResult : public ServiceResult
			{
			public:
				struct SendResult
				{
					std::string email;
					std::string message;
					std::string code;
				};


				DeleteEmailVerificationResult();
				explicit DeleteEmailVerificationResult(const std::string &payload);
				~DeleteEmailVerificationResult();
				std::vector<SendResult> getSuccessList()const;
				std::vector<SendResult> getFailList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SendResult> successList_;
				std::vector<SendResult> failList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_DELETEEMAILVERIFICATIONRESULT_H_