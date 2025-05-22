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

#ifndef ALIBABACLOUD_RDS_MODEL_LISTCLASSESRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_LISTCLASSESRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT ListClassesResult : public ServiceResult
			{
			public:
				struct ClassList
				{
					std::string maxIOMBPS;
					std::string classCode;
					std::string category;
					std::string storageType;
					std::string encryptedMemory;
					std::string maxConnections;
					std::string classGroup;
					std::string cpu;
					std::string instructionSetArch;
					std::string memoryClass;
					std::string referencePrice;
					std::string maxIOPS;
				};


				ListClassesResult();
				explicit ListClassesResult(const std::string &payload);
				~ListClassesResult();
				std::vector<ClassList> getItems()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ClassList> items_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_LISTCLASSESRESULT_H_