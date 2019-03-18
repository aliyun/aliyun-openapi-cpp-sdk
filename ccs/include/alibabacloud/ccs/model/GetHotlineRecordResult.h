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

#ifndef ALIBABACLOUD_CCS_MODEL_GETHOTLINERECORDRESULT_H_
#define ALIBABACLOUD_CCS_MODEL_GETHOTLINERECORDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccs/CcsExport.h>

namespace AlibabaCloud
{
	namespace Ccs
	{
		namespace Model
		{
			class ALIBABACLOUD_CCS_EXPORT GetHotlineRecordResult : public ServiceResult
			{
			public:


				GetHotlineRecordResult();
				explicit GetHotlineRecordResult(const std::string &payload);
				~GetHotlineRecordResult();
				std::string getStatus()const;
				std::string getGroupName()const;
				std::string getVisitorId()const;
				std::string getOutboundTaskId()const;
				std::string getCategories()const;
				long getTalkDuration()const;
				std::string getVisitorPhone()const;
				std::string getCreateTime()const;
				std::string getSatisfaction()const;
				std::string getCallType()const;
				std::string getVisitorProvince()const;
				std::string getCcsInstanceId()const;
				std::string getGroupId()const;
				std::string getSceneId()const;
				std::string getFinishTime()const;
				std::string getHangupType()const;
				std::string getId()const;
				std::string getAgentId()const;
				std::string getAgentName()const;
				std::string getMemo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string groupName_;
				std::string visitorId_;
				std::string outboundTaskId_;
				std::string categories_;
				long talkDuration_;
				std::string visitorPhone_;
				std::string createTime_;
				std::string satisfaction_;
				std::string callType_;
				std::string visitorProvince_;
				std::string ccsInstanceId_;
				std::string groupId_;
				std::string sceneId_;
				std::string finishTime_;
				std::string hangupType_;
				std::string id_;
				std::string agentId_;
				std::string agentName_;
				std::string memo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCS_MODEL_GETHOTLINERECORDRESULT_H_