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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBECLASSDETAILSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBECLASSDETAILSRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeClassDetailsResult : public ServiceResult
			{
			public:


				DescribeClassDetailsResult();
				explicit DescribeClassDetailsResult(const std::string &payload);
				~DescribeClassDetailsResult();
				std::string getMaxIOMBPS()const;
				std::string getCategory()const;
				std::string getClassCode()const;
				std::string getMaxConnections()const;
				std::string getClassGroup()const;
				std::string getCpu()const;
				std::string getInstructionSetArch()const;
				std::string getMemoryClass()const;
				std::string getDBInstanceStorageType()const;
				std::string getReferencePrice()const;
				std::string getMaxIOPS()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string maxIOMBPS_;
				std::string category_;
				std::string classCode_;
				std::string maxConnections_;
				std::string classGroup_;
				std::string cpu_;
				std::string instructionSetArch_;
				std::string memoryClass_;
				std::string dBInstanceStorageType_;
				std::string referencePrice_;
				std::string maxIOPS_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBECLASSDETAILSRESULT_H_