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

#ifndef ALIBABACLOUD_SCSP_MODEL_GETCMSIDBYFOREIGNIDRESULT_H_
#define ALIBABACLOUD_SCSP_MODEL_GETCMSIDBYFOREIGNIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT GetCMSIdByForeignIdResult : public ServiceResult
			{
			public:
				struct Data
				{
					int status;
					std::string userId;
					std::string nick;
					std::string phone;
					bool anonymity;
					int customerTypeId;
					std::string gender;
					std::string avatar;
					std::string foreignId;
				};


				GetCMSIdByForeignIdResult();
				explicit GetCMSIdByForeignIdResult(const std::string &payload);
				~GetCMSIdByForeignIdResult();
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
#endif // !ALIBABACLOUD_SCSP_MODEL_GETCMSIDBYFOREIGNIDRESULT_H_