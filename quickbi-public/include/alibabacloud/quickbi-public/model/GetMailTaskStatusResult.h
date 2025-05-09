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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_GETMAILTASKSTATUSRESULT_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_GETMAILTASKSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>

namespace AlibabaCloud
{
	namespace Quickbi_public
	{
		namespace Model
		{
			class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT GetMailTaskStatusResult : public ServiceResult
			{
			public:
				struct DATA
				{
					std::string status;
					long taskId;
					std::string execTime;
					std::string mailId;
				};


				GetMailTaskStatusResult();
				explicit GetMailTaskStatusResult(const std::string &payload);
				~GetMailTaskStatusResult();
				bool getSuccess()const;
				std::vector<DATA> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool success_;
				std::vector<DATA> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_GETMAILTASKSTATUSRESULT_H_