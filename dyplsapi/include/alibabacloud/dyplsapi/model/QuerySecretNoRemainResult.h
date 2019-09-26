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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_QUERYSECRETNOREMAINRESULT_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_QUERYSECRETNOREMAINRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dyplsapi/DyplsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyplsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPLSAPI_EXPORT QuerySecretNoRemainResult : public ServiceResult
			{
			public:
				struct SecretRemainDTO
				{
					struct RemainDTO
					{
						long amount;
						std::string city;
					};
					std::vector<RemainDTO> remainDTOList;
					long amount;
					std::string city;
				};


				QuerySecretNoRemainResult();
				explicit QuerySecretNoRemainResult(const std::string &payload);
				~QuerySecretNoRemainResult();
				SecretRemainDTO getSecretRemainDTO()const;
				std::string getMessage()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				SecretRemainDTO secretRemainDTO_;
				std::string message_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_QUERYSECRETNOREMAINRESULT_H_