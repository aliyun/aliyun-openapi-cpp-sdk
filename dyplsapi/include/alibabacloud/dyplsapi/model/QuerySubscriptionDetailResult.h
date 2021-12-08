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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_QUERYSUBSCRIPTIONDETAILRESULT_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_QUERYSUBSCRIPTIONDETAILRESULT_H_

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
			class ALIBABACLOUD_DYPLSAPI_EXPORT QuerySubscriptionDetailResult : public ServiceResult
			{
			public:
				struct SecretBindDetailDTO
				{
					long status;
					bool aSRStatus;
					std::string expireDate;
					std::string phoneNoX;
					long groupId;
					std::string subsId;
					std::string extension;
					std::string callRestrict;
					std::string gmtCreate;
					std::string aSRModelId;
					bool needRecord;
					std::string phoneNoB;
					std::string phoneNoA;
				};


				QuerySubscriptionDetailResult();
				explicit QuerySubscriptionDetailResult(const std::string &payload);
				~QuerySubscriptionDetailResult();
				SecretBindDetailDTO getSecretBindDetailDTO()const;
				std::string getMessage()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				SecretBindDetailDTO secretBindDetailDTO_;
				std::string message_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_QUERYSUBSCRIPTIONDETAILRESULT_H_