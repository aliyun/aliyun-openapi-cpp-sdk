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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERLOGSRESULT_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERLOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT DescribeClusterLogsResult : public ServiceResult
			{
			public:


				DescribeClusterLogsResult();
				explicit DescribeClusterLogsResult(const std::string &payload);
				~DescribeClusterLogsResult();
				std::string getCluster_id()const;
				std::string getUpdated()const;
				std::string getLog_level()const;
				std::string getID()const;
				std::string getCluster_log()const;
				std::string getCreated()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string cluster_id_;
				std::string updated_;
				std::string log_level_;
				std::string iD_;
				std::string cluster_log_;
				std::string created_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERLOGSRESULT_H_