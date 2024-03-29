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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_QUERYROBOTTASKLISTRESULT_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_QUERYROBOTTASKLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT QueryRobotTaskListResult : public ServiceResult
			{
			public:


				QueryRobotTaskListResult();
				explicit QueryRobotTaskListResult(const std::string &payload);
				~QueryRobotTaskListResult();
				std::string getTotalCount()const;
				std::string getPageSize()const;
				std::string getMessage()const;
				std::string getData()const;
				std::string getPageNo()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string pageSize_;
				std::string message_;
				std::string data_;
				std::string pageNo_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_QUERYROBOTTASKLISTRESULT_H_