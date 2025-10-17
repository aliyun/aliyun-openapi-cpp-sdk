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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAPPLICATIONSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAPPLICATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeApplicationsResult : public ServiceResult
			{
			public:
				struct Applications
				{
					struct Endpoint
					{
						std::string iP;
						std::string port;
						std::string netType;
					};
					std::string status;
					std::string description;
					std::string engineVersion;
					std::string zoneId;
					std::string expired;
					std::string payType;
					std::string polarFSInstanceId;
					std::vector<Applications::Endpoint> endpoints;
					std::string applicationType;
					std::string creationTime;
					std::string regionId;
					std::string applicationId;
					std::string expireTime;
				};


				DescribeApplicationsResult();
				explicit DescribeApplicationsResult(const std::string &payload);
				~DescribeApplicationsResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<Applications> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<Applications> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEAPPLICATIONSRESULT_H_