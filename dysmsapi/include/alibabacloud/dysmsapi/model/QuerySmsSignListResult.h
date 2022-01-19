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

#ifndef ALIBABACLOUD_DYSMSAPI_MODEL_QUERYSMSSIGNLISTRESULT_H_
#define ALIBABACLOUD_DYSMSAPI_MODEL_QUERYSMSSIGNLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dysmsapi/DysmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dysmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYSMSAPI_EXPORT QuerySmsSignListResult : public ServiceResult
			{
			public:
				struct QuerySmsSignDTO
				{
					struct Reason
					{
						std::string rejectInfo;
						std::string rejectSubInfo;
						std::string rejectDate;
					};
					std::string auditStatus;
					std::string businessType;
					std::string orderId;
					std::string createDate;
					Reason reason;
					std::string signName;
				};


				QuerySmsSignListResult();
				explicit QuerySmsSignListResult(const std::string &payload);
				~QuerySmsSignListResult();
				std::string getMessage()const;
				std::vector<QuerySmsSignDTO> getSmsSignList()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<QuerySmsSignDTO> smsSignList_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYSMSAPI_MODEL_QUERYSMSSIGNLISTRESULT_H_