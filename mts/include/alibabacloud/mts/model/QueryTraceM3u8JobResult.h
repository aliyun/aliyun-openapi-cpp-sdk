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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYTRACEM3U8JOBRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYTRACEM3U8JOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT QueryTraceM3u8JobResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string trace;
					std::string status;
					long gmtCreate;
					std::string mediaId;
					std::string userData;
					long userId;
					std::string output;
					long gmtModified;
					long traceId;
					std::string jobId;
				};


				QueryTraceM3u8JobResult();
				explicit QueryTraceM3u8JobResult(const std::string &payload);
				~QueryTraceM3u8JobResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				long getStatusCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				long statusCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYTRACEM3U8JOBRESULT_H_