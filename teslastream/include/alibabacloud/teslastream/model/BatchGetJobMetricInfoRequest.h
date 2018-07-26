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

#ifndef ALIBABACLOUD_TESLASTREAM_MODEL_BATCHGETJOBMETRICINFOREQUEST_H_
#define ALIBABACLOUD_TESLASTREAM_MODEL_BATCHGETJOBMETRICINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/teslastream/TeslaStreamExport.h>

namespace AlibabaCloud
{
	namespace TeslaStream
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLASTREAM_EXPORT BatchGetJobMetricInfoRequest : public RpcServiceRequest
			{

			public:
				BatchGetJobMetricInfoRequest();
				~BatchGetJobMetricInfoRequest();

				std::string getJobInfos()const;
				void setJobInfos(const std::string& jobInfos);

            private:
				std::string jobInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLASTREAM_MODEL_BATCHGETJOBMETRICINFOREQUEST_H_