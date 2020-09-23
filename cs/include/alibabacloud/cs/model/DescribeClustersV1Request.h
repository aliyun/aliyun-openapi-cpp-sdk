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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERSV1REQUEST_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERSV1REQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT DescribeClustersV1Request : public RoaServiceRequest
			{

			public:
				DescribeClustersV1Request();
				~DescribeClustersV1Request();

				std::string getClusterType()const;
				void setClusterType(const std::string& clusterType);
				long getPage_number()const;
				void setPage_number(long page_number);
				std::string getName()const;
				void setName(const std::string& name);
				long getPage_size()const;
				void setPage_size(long page_size);

            private:
				std::string clusterType_;
				long page_number_;
				std::string name_;
				long page_size_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERSV1REQUEST_H_