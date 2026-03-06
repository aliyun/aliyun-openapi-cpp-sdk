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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDATASERVICECONTEXTUPDATEEVENTRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDATASERVICECONTEXTUPDATEEVENTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetDataServiceContextUpdateEventResult : public ServiceResult
			{
			public:


				GetDataServiceContextUpdateEventResult();
				explicit GetDataServiceContextUpdateEventResult(const std::string &payload);
				~GetDataServiceContextUpdateEventResult();
				std::string getErrMsg()const;
				std::string getData()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errMsg_;
				std::string data_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDATASERVICECONTEXTUPDATEEVENTRESULT_H_