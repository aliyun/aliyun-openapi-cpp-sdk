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

#ifndef ALIBABACLOUD_CAS_MODEL_SIGNRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_SIGNRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT SignResult : public ServiceResult
			{
			public:


				SignResult();
				explicit SignResult(const std::string &payload);
				~SignResult();
				std::string getSignature()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string signature_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_SIGNRESULT_H_