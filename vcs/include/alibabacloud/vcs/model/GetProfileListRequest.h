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

#ifndef ALIBABACLOUD_VCS_MODEL_GETPROFILELISTREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_GETPROFILELISTREQUEST_H_

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
			class ALIBABACLOUD_VCS_EXPORT GetProfileListRequest : public RpcServiceRequest
			{

			public:
				GetProfileListRequest();
				~GetProfileListRequest();

				std::map<std::string, std::string> getProfileIdList()const;
				void setProfileIdList(const std::map<std::string, std::string>& profileIdList);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				int getGender()const;
				void setGender(int gender);
				std::string getPlateNo()const;
				void setPlateNo(const std::string& plateNo);
				std::string getIdNumber()const;
				void setIdNumber(const std::string& idNumber);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getFaceImageId()const;
				void setFaceImageId(const std::string& faceImageId);
				std::string getFaceUrl()const;
				void setFaceUrl(const std::string& faceUrl);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::map<std::string, std::string> getPersonIdList()const;
				void setPersonIdList(const std::map<std::string, std::string>& personIdList);
				std::string getLiveAddress()const;
				void setLiveAddress(const std::string& liveAddress);
				std::string getIsvSubId()const;
				void setIsvSubId(const std::string& isvSubId);
				std::string getSceneType()const;
				void setSceneType(const std::string& sceneType);
				std::string getPhoneNo()const;
				void setPhoneNo(const std::string& phoneNo);
				long getCatalogId()const;
				void setCatalogId(long catalogId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getMatchingRateThreshold()const;
				void setMatchingRateThreshold(const std::string& matchingRateThreshold);

            private:
				std::map<std::string, std::string> profileIdList_;
				std::string corpId_;
				int gender_;
				std::string plateNo_;
				std::string idNumber_;
				long pageNumber_;
				std::string faceImageId_;
				std::string faceUrl_;
				long pageSize_;
				std::map<std::string, std::string> personIdList_;
				std::string liveAddress_;
				std::string isvSubId_;
				std::string sceneType_;
				std::string phoneNo_;
				long catalogId_;
				std::string name_;
				std::string bizId_;
				std::string matchingRateThreshold_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_GETPROFILELISTREQUEST_H_