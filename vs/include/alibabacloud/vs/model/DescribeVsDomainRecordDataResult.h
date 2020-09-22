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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEVSDOMAINRECORDDATARESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEVSDOMAINRECORDDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeVsDomainRecordDataResult : public ServiceResult
			{
			public:
				struct DataModule
				{
					std::string recordValue;
					std::string timeStamp;
				};


				DescribeVsDomainRecordDataResult();
				explicit DescribeVsDomainRecordDataResult(const std::string &payload);
				~DescribeVsDomainRecordDataResult();
				std::string getEndTime()const;
				std::vector<DataModule> getRecordDataPerInterval()const;
				std::string getDomainName()const;
				std::string getStartTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::vector<DataModule> recordDataPerInterval_;
				std::string domainName_;
				std::string startTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEVSDOMAINRECORDDATARESULT_H_