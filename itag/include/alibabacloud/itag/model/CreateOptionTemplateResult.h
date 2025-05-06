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

#ifndef ALIBABACLOUD_ITAG_MODEL_CREATEOPTIONTEMPLATERESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_CREATEOPTIONTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/itag/ItagExport.h>

namespace AlibabaCloud
{
	namespace Itag
	{
		namespace Model
		{
			class ALIBABACLOUD_ITAG_EXPORT CreateOptionTemplateResult : public ServiceResult
			{
			public:


				CreateOptionTemplateResult();
				explicit CreateOptionTemplateResult(const std::string &payload);
				~CreateOptionTemplateResult();
				std::string getMsg()const;
				std::string getRequestId()const;
				bool getSucc()const;
				std::string getErrorCode()const;
				std::string getErrInfo()const;
				int getCode()const;
				long getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::string requestId_;
				bool succ_;
				std::string errorCode_;
				std::string errInfo_;
				int code_;
				long result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ITAG_MODEL_CREATEOPTIONTEMPLATERESULT_H_