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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTUSERDRAWRECORDBYPKRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTUSERDRAWRECORDBYPKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT ListUserDrawRecordByPkResult : public ServiceResult
			{
			public:
				struct Lingmadata
				{
					std::string gmtCreate;
					std::string drawResult;
					std::string drawGroup;
					std::string taskGroupId;
					std::string aliyunPk;
					std::string drawPoolName;
					std::string uccId;
				};


				ListUserDrawRecordByPkResult();
				explicit ListUserDrawRecordByPkResult(const std::string &payload);
				~ListUserDrawRecordByPkResult();
				std::vector<Lingmadata> getdata()const;
				std::string getRequestId()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Lingmadata> data_;
				std::string requestId_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTUSERDRAWRECORDBYPKRESULT_H_