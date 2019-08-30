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

#ifndef ALIBABACLOUD_XTRACE_MODEL_GETTOKENRESULT_H_
#define ALIBABACLOUD_XTRACE_MODEL_GETTOKENRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/xtrace/XtraceExport.h>

namespace AlibabaCloud
{
	namespace Xtrace
	{
		namespace Model
		{
			class ALIBABACLOUD_XTRACE_EXPORT GetTokenResult : public ServiceResult
			{
			public:
				struct Token
				{
					std::string pid;
					std::string domain;
					std::string internalDomain;
					std::string licenseKey;
				};


				GetTokenResult();
				explicit GetTokenResult(const std::string &payload);
				~GetTokenResult();
				Token getToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				Token token_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_XTRACE_MODEL_GETTOKENRESULT_H_