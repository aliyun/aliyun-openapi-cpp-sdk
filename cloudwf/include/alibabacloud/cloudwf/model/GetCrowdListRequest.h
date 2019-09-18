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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_GETCROWDLISTREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_GETCROWDLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT GetCrowdListRequest : public RpcServiceRequest
			{

			public:
				GetCrowdListRequest();
				~GetCrowdListRequest();

				int getClassType()const;
				void setClassType(int classType);
				std::string getGsType()const;
				void setGsType(const std::string& gsType);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getGsid()const;
				void setGsid(long gsid);
				int getPage()const;
				void setPage(int page);
				int getPer()const;
				void setPer(int per);
				long getBid()const;
				void setBid(long bid);

            private:
				int classType_;
				std::string gsType_;
				std::string endTime_;
				std::string startTime_;
				std::string accessKeyId_;
				long gsid_;
				int page_;
				int per_;
				long bid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_GETCROWDLISTREQUEST_H_