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

#ifndef ALIBABACLOUD_RDS_MODEL_CHECKRESOURCERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_CHECKRESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT CheckResourceResult : public ServiceResult
			{
			public:
				struct Resource
				{
					std::string dBInstanceAvailable;
					std::string engineVersion;
					std::string engine;
				};


				CheckResourceResult();
				explicit CheckResourceResult(const std::string &payload);
				~CheckResourceResult();
				std::string getSpecifyCount()const;
				void setSpecifyCount(const std::string& specifyCount);
				std::vector<Resource> getResources()const;
				void setResources(const std::vector<Resource>& resources);

			protected:
				void parse(const std::string &payload);
			private:
				std::string specifyCount_;
				std::vector<Resource> resources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_CHECKRESOURCERESULT_H_