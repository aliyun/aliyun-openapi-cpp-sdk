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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTZKTRACKRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_LISTZKTRACKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT ListZkTrackResult : public ServiceResult
			{
			public:
				struct Trace
				{
					std::string path;
					bool finished;
					std::string traceType;
					std::string eventType;
					std::string acl;
					std::string timestamp;
					long ttl;
					std::string result;
					bool watch;
					std::string dataType;
					std::string opType;
					long multiSize;
					std::string logDate;
					std::string sessionId;
				};


				ListZkTrackResult();
				explicit ListZkTrackResult(const std::string &payload);
				~ListZkTrackResult();
				std::string getHttpCode()const;
				long getTotalCount()const;
				long getPageSize()const;
				std::string getMessage()const;
				std::vector<Trace> getTraces()const;
				long getPageNumber()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string httpCode_;
				long totalCount_;
				long pageSize_;
				std::string message_;
				std::vector<Trace> traces_;
				long pageNumber_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_LISTZKTRACKRESULT_H_