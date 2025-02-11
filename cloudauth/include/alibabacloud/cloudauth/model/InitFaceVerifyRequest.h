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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_INITFACEVERIFYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_INITFACEVERIFYREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT InitFaceVerifyRequest : public RpcServiceRequest {
public:
	InitFaceVerifyRequest();
	~InitFaceVerifyRequest();
	std::string getFaceContrastPicture() const;
	void setFaceContrastPicture(const std::string &faceContrastPicture);
	std::string getReadImg() const;
	void setReadImg(const std::string &readImg);
	std::string getRarelyCharacters() const;
	void setRarelyCharacters(const std::string &rarelyCharacters);
	std::string getVoluntaryCustomizedContent() const;
	void setVoluntaryCustomizedContent(const std::string &voluntaryCustomizedContent);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getEncryptType() const;
	void setEncryptType(const std::string &encryptType);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getOuterOrderNo() const;
	void setOuterOrderNo(const std::string &outerOrderNo);
	std::string getFaceContrastPictureUrl() const;
	void setFaceContrastPictureUrl(const std::string &faceContrastPictureUrl);
	std::string getModel() const;
	void setModel(const std::string &model);
	std::string getCertifyUrlStyle() const;
	void setCertifyUrlStyle(const std::string &certifyUrlStyle);
	std::string getMetaInfo() const;
	void setMetaInfo(const std::string &metaInfo);
	std::string getCameraSelection() const;
	void setCameraSelection(const std::string &cameraSelection);
	std::string getValidityDate() const;
	void setValidityDate(const std::string &validityDate);
	std::string getCertName() const;
	void setCertName(const std::string &certName);
	std::string getIp() const;
	void setIp(const std::string &ip);
	long getSceneId() const;
	void setSceneId(long sceneId);
	std::string getOssBucketName() const;
	void setOssBucketName(const std::string &ossBucketName);
	std::string getCrop() const;
	void setCrop(const std::string &crop);
	std::string getCertifyUrlType() const;
	void setCertifyUrlType(const std::string &certifyUrlType);
	std::string getBirthday() const;
	void setBirthday(const std::string &birthday);
	std::string getExperienceCode() const;
	void setExperienceCode(const std::string &experienceCode);
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getVideoEvidence() const;
	void setVideoEvidence(const std::string &videoEvidence);
	std::string getCertifyId() const;
	void setCertifyId(const std::string &certifyId);
	std::string getCertNo() const;
	void setCertNo(const std::string &certNo);
	std::string getCertType() const;
	void setCertType(const std::string &certType);
	std::string getSuitableType() const;
	void setSuitableType(const std::string &suitableType);
	std::string getOssObjectName() const;
	void setOssObjectName(const std::string &ossObjectName);
	std::string getAppQualityCheck() const;
	void setAppQualityCheck(const std::string &appQualityCheck);
	std::string getMobile() const;
	void setMobile(const std::string &mobile);
	std::string getFaceGuardOutput() const;
	void setFaceGuardOutput(const std::string &faceGuardOutput);
	std::string getAuthId() const;
	void setAuthId(const std::string &authId);
	std::string getProcedurePriority() const;
	void setProcedurePriority(const std::string &procedurePriority);
	std::string getCallbackToken() const;
	void setCallbackToken(const std::string &callbackToken);
	std::string getUiCustomUrl() const;
	void setUiCustomUrl(const std::string &uiCustomUrl);
	std::string getReturnUrl() const;
	void setReturnUrl(const std::string &returnUrl);
	std::string getCallbackUrl() const;
	void setCallbackUrl(const std::string &callbackUrl);

private:
	std::string faceContrastPicture_;
	std::string readImg_;
	std::string rarelyCharacters_;
	std::string voluntaryCustomizedContent_;
	std::string userId_;
	std::string encryptType_;
	std::string mode_;
	std::string outerOrderNo_;
	std::string faceContrastPictureUrl_;
	std::string model_;
	std::string certifyUrlStyle_;
	std::string metaInfo_;
	std::string cameraSelection_;
	std::string validityDate_;
	std::string certName_;
	std::string ip_;
	long sceneId_;
	std::string ossBucketName_;
	std::string crop_;
	std::string certifyUrlType_;
	std::string birthday_;
	std::string experienceCode_;
	std::string productCode_;
	std::string videoEvidence_;
	std::string certifyId_;
	std::string certNo_;
	std::string certType_;
	std::string suitableType_;
	std::string ossObjectName_;
	std::string appQualityCheck_;
	std::string mobile_;
	std::string faceGuardOutput_;
	std::string authId_;
	std::string procedurePriority_;
	std::string callbackToken_;
	std::string uiCustomUrl_;
	std::string returnUrl_;
	std::string callbackUrl_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_INITFACEVERIFYREQUEST_H_
