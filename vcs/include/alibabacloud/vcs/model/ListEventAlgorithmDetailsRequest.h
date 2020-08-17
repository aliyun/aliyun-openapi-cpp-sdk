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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTEVENTALGORITHMDETAILSREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_LISTEVENTALGORITHMDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT ListEventAlgorithmDetailsRequest : public RpcServiceRequest
			{

			public:
				ListEventAlgorithmDetailsRequest();
				~ListEventAlgorithmDetailsRequest();

				std::string getSourceId()const;
				void setSourceId(const std::string& sourceId);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getExtendValue()const;
				void setExtendValue(const std::string& extendValue);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRecordId()const;
				void setRecordId(const std::string& recordId);
				std::string getEventValue()const;
				void setEventValue(const std::string& eventValue);
				std::string getDataSourceId()const;
				void setDataSourceId(const std::string& dataSourceId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getEventType()const;
				void setEventType(const std::string& eventType);

            private:
				std::string sourceId_;
				std::string corpId_;
				std::string extendValue_;
				std::string endTime_;
				std::string startTime_;
				int pageNumber_;
				std::string recordId_;
				std::string eventValue_;
				std::string dataSourceId_;
				int pageSize_;
				std::string eventType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTEVENTALGORITHMDETAILSREQUEST_H_