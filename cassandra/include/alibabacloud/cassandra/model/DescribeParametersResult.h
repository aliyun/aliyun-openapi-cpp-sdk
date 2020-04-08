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

#ifndef ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBEPARAMETERSRESULT_H_
#define ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBEPARAMETERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cassandra/CassandraExport.h>

namespace AlibabaCloud
{
	namespace Cassandra
	{
		namespace Model
		{
			class ALIBABACLOUD_CASSANDRA_EXPORT DescribeParametersResult : public ServiceResult
			{
			public:
				struct _Parameter
				{
					std::string defaultValue;
					std::string allowedValues;
					std::string description;
					std::string value;
					std::string dataType;
					std::string name;
				};


				DescribeParametersResult();
				explicit DescribeParametersResult(const std::string &payload);
				~DescribeParametersResult();
				long getTotalCount()const;
				std::vector<_Parameter> getParameters()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<_Parameter> parameters_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBEPARAMETERSRESULT_H_